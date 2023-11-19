FROM ubuntu:22.04

# Update system.
RUN apt-get update
RUN apt-get upgrade -yq

# Install project's dependencies.
RUN apt-get install -yq libcgal-dev

COPY . /cgal-examples
