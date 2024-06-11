build:
	go build -o bin/ospf-lb main.go

run:
	go run main.go

clean:
	rm -rf bin/

test:
	go test -v ./...
