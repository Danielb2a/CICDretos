FROM gcc:latest

WORKDIR /app

COPY . .

RUN make build

ENTRYPOINT ["./main"]
