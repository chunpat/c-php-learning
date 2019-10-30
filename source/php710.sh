#!/bin/sh


echo "---------- Install php ----------"
tar -zxvf php-src-php-7.1.0.tar.gz \
&& ( cd php-src-php-7.1.0 && ./buildconf --force && ./configure --prefix=/var/work/php710 && make && make test) 