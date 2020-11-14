# Se usa para iniciar el autoindex (encendido por defecto)
sed -i '28d' etc/nginx/sites-available/manuphp.com
sed -i "28i		autoindex on;\n" etc/nginx/sites-available/manuphp.com
service nginx reload
