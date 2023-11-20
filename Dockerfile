FROM ubuntu:22.04

# Update system.
RUN apt-get update
RUN apt-get upgrade -yq

# Install project's dependencies.
RUN apt-get install -yq g++ cmake
RUN apt-get install -yq libcgal-dev libcgal-demo
RUN apt-get install -yq qtbase5-dev qtchooser qt5-qmake qtbase5-dev-tools libqt5gui5 qtscript5-dev
RUN rm -rf /var/lib/apt/lists/*

COPY . /cgal-examples
