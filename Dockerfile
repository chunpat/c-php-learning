FROM ubuntu:18.04

RUN  sed -i s@/archive.ubuntu.com/@/mirrors.aliyun.com/@g /etc/apt/sources.list \
     && apt-get clean \
     && apt-get update \
     && apt-get install gdb gcc gcc+ automake autoconf bison make -y

COPY ./source /tmp/source

WORKDIR /tmp/source

RUN apt-get install -y libxml2 libxml2-dev \ 
    && chmod +x php710.sh \
    && sh php710.sh \
    && rm -rf /tmp/source

WORKDIR /var/work/
