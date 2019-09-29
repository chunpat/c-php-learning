FROM ubuntu:18.04

RUN  sed -i s@/archive.ubuntu.com/@/mirrors.aliyun.com/@g /etc/apt/sources.list \
     && apt-get clean \
     && apt-get update \
     && apt-get install gdb gcc gcc+ -y

WORKDIR /var/work/
