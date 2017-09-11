package main

import "math/rand"
import "fmt"
import "time"

func main() {
	rand.Seed(time.Now().UTC().UnixNano())
	n := 10
	m := 9
	matrix := make([][]int, n)
	for i := 0; i < n; i++ {
		matrix[i] = make([]int, m)
		for j := 0; j < m; j++ {
			matrix[i][j] = rand.Int()
		}
	}
	fmt.Println(matrix)
}
