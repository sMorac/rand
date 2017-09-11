package main

import "math/rand"
import "fmt"
import "time"

func main() {
	rand.Seed(time.Now().UTC().UnixNano())
	s_len := 10
	const letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

	b := make([]byte, s_len)
	for i := range b {
		b[i] = letters[rand.Int63()%int64(len(letters))]
	}
	fmt.Println(string(b))
}
