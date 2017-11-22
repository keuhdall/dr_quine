package main

import(
	"fmt"
	"os"
	"bufio"
)

/*
 a
*/

func main() {
	f,err := os.Create("Grace_kid.go")
	if (err != nil) {
		panic(err)
	}
	w := bufio.NewWriter(f)
	s := `package main

import(
	"fmt"
	"os"
	"bufio"
)

/*
 a
*/

func main() {
	f,err := os.Create("Grace_kid.go")
	if (err != nil) {
		panic(err)
	}
	w := bufio.NewWriter(f)
	s := %s
	fmt.Fprintf(w, s, "%c"+s+"%c", 96, 96, 10)
	w.Flush()
}%c`
	fmt.Fprintf(w, s, "`"+s+"`", 96, 96, 10)
	w.Flush()
}
