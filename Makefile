build:
	go build -o bin/ospf-lb main.go

run:
	go run main.go

clean:
	rm -rf bin/

test:
	go test -v ./...

install-ebpf-deps:
	sudo apt-get install bpfcc-tools linux-headers-$(uname -r)
	sudo apt-get install libbpf-dev

