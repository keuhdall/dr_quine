package main

import ("fmt")
/*
 a
*/
func ftNull() {}

func main() {
/*
 b
*/
	s := `package main

import ("fmt")
/*
 a
*/
func ftNull() {}

func main() {
/*
 b
*/
	s := %s
	fmt.Printf(s, "%c"+s+"%c", 96, 96, 10)
}%c`
	fmt.Printf(s, "`"+s+"`", 96, 96, 10)
}
