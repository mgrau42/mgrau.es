#se usa para detener el auto_index
sed -i '28d' etc/nginx/sites-available/manuphp.com
sed -i "28i		autoindex off;\n" etc/nginx/sites-available/manuphp.com
service nginx reload
