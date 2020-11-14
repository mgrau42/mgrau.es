# Default server configuration
#
server {
	listen 80 default_server;
	listen [::]:80 default_server;

	server_name localhost www.localhost;
	return 301 https://$host$request_uri;
}

# Default server configuration
#
server {

	# SSL configuration
	#
	 listen 443 ssl;
	 listen [::]:443 ssl;
	 ssl_certificate /etc/nginx/ssl/nginx-manupage.crt;
	 ssl_certificate_key /etc/nginx/ssl/nginx-manupage.key;

	root /var/www/manuphp;
	index index.php index.html index.htm index.nginx-debian.html;

	server_name localhost www.localhost;

	location / {
		autoindex on;
		try_files $uri $uri/ =404;
	}

	location ~ \.php$ {
		include snippets/fastcgi-php.conf;
		fastcgi_pass unix:/run/php/php7.3-fpm.sock;
	}

	location ~ /\.ht {
		deny all;
	}
}
