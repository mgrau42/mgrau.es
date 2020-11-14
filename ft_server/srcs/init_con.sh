#este sera nuestro directorio de configuracion general
mkdir /var/www/manuphp

#descomprimimos phpmyadmin y lo situamos en su subdirectorio
unzip phpMyAdmin-5.0.4-all-languages.zip
mv phpMyAdmin-5.0.4-all-languages var/www/manuphp
mv var/www/manuphp/phpMyAdmin-5.0.4-all-languages var/www/manuphp/phpMyAdmin
mv config.inc.php var/www/manuphp/phpMyAdmin
mkdir var/www/manuphp/phpMyAdmin/tmp
chmod 777 var/www/manuphp/phpMyAdmin/tmp
sudo chown -R www-data:www-data var/www/manuphp/phpMyAdmin

#descomprimimos wordpress y lo situamos en su subdirectorio
unzip latest-es_ES.zip
mv wordpress var/www/manuphp
mv wp-config.php var/www/manuphp/wordpress

#configuracion de nuestra pagina de entrada
mv index.html /var/www/manuphp
mv main.css /var/www/manuphp

#activamos nuestra pagina añadiendo la configuracion de nginx
mv manuphp.com etc/nginx/sites-available
ln -s /etc/nginx/sites-available/manuphp.com /etc/nginx/sites-enabled/manuphp.com

#eliminamos la configuracion por defecto
rm -rf /etc/nginx/sites-enabled/default
rm -rf /etc/nginx/site-available/default

#SSL
mkdir etc/nginx/ssl
openssl req -x509 -nodes -days 365 -newkey rsa:2048 -keyout etc/nginx/ssl/nginx-manupage.key -out etc/nginx/ssl/nginx-manupage.crt -subj "/C=ES/ST=Madrid/L=Madrid/O=42/OU=mgrau42/CN=manusite"

#inicializamos los servicios
service nginx start && service php7.3-fpm start && service mysql start


#configuramos nuestro usuario y creamos una base de datos

mysqladmin --user=root password "1994"
echo "CREATE USER 'phpmyadmin'@'localhost' IDENTIFIED BY '1994';" | mysql -u root
echo "GRANT ALL PRIVILEGES ON *.* TO 'phpmyadmin'@'localhost' WITH GRANT OPTION;" | mysql -u root
echo "create database database_manudata default character set utf8 collate utf8_unicode_ci;" | mysql -u root
echo "grant all on database_manudata.* to 'database_user'@'localhost' identified by '1994';" | mysql -u root
echo "#flush privileges;" | mysql -u root
mysql < var/www/manuphp/phpMyAdmin/sql/create_tables.sql -u root
