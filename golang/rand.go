package main

import "math/rand"
import "fmt"
import "time"

func main() {
	rand.Seed(time.Now().UTC().UnixNano())
	fmt.Println(rand.Int())
}
