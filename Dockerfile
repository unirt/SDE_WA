FROM ubuntu:18.04

ENV sde_wa_dir "SDE_WA"

RUN apt-get update && \
    apt-get install -y git build-essential cmake clang libssl-dev

ADD ./* /${sde_wa_dir}/

WORKDIR /${sde_wa_dir}

CMD [ "make", "all" ]