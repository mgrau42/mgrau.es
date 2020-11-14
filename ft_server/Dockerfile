# Como base usamos la imagen de Debian buster

FROM debian:buster

#Primero realizamos un update y un upgrade y procedemos a instalar los paquetes necesarios para instalar nuestros servicios
RUN apt update -y && apt upgrade -y &&  apt-get install curl -y && apt-get install nginx -y
RUN apt-get install wget -y
RUN apt-get install php7.3-fpm php-mysql -y
RUN apt install mariadb-server mariadb-client -y
RUN apt install -y php-json php-mbstring
RUN apt install -y openssl
# descargamos los archivos de configuracion para phpMyAdmin y wordpress
RUN wget https://files.phpmyadmin.net/phpMyAdmin/5.0.4/phpMyAdmin-5.0.4-all-languages.zip
RUN wget https://es.wordpress.org/latest-es_ES.zip
RUN apt-get install unzip -y
# copiamos el contenido de nuestro directorio srcs en la raiz de nuestro contenedor, este contiene los archivos de configuracion.
COPY  ./srcs ./

# init_con mueve nuestros archivos de configuracion a sus respectivos directorio e inicializa nuestra base de datos
RUN bash init_con.sh
# iniciamos nuestros servicios al correr nuestro contenedor
ENTRYPOINT service nginx start && service php7.3-fpm start && service mysql start && bin/bash
