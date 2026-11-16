From docker.io/library/debian:bookworm-slim

# Install GCC and make
RUN apt-get update && \
	apt-get install -y --no-install-recommends build-essential && \
	rm -rf /var/lib/apt/lists/*

#Working directory in container
WORKDIR /app

# Copy Lab 4 source files and MakeFile
COPY fibonacci.c main.c test_fibonacci.c makefile ./
COPY headers/ ./headers/

#Compiling Fibonacci and run unit tests
RUN make && make test

# Run unit tests when container starts
CMD ["./test_fibonacci"]

