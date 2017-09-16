package main

import (
	"os/exec"
	"fmt"
	"os"
	"bufio"
)

func main() {
	i := 5
	if (i <= 0) {
		os.Exit(0)
	}
	mkdirCmd := exec.Command("mkdir", fmt.Sprintf("Sully_%d", i-1))
	mkdirCmd.Run()
	f,err := os.Create(fmt.Sprintf("./Sully_%d/Sully_%d.go", i-1, i-1))
	if (err != nil) {
		panic(err)
	}
	w := bufio.NewWriter(f)
	s := `package main

import (
	"os/exec"
	"fmt"
	"os"
	"bufio"
)

func main() {
	i := %d
	if (i <= 0) {
		os.Exit(0)
	}
	mkdirCmd := exec.Command("mkdir", fmt.Sprintf("Sully_%%d", i-1))
	mkdirCmd.Run()
	f,err := os.Create(fmt.Sprintf("./Sully_%%d/Sully_%%d.go", i-1, i-1))
	if (err != nil) {
		panic(err)
	}
	w := bufio.NewWriter(f)
	s := %s
	fmt.Fprintf(w, s, i-1, "%c"+s+"%c", 96, 96, 10)
	w.Flush()
	runCmd := exec.Command("go", "run", fmt.Sprintf("Sully_%%d/Sully_%%d.go", i-1, i-1))
	runCmd.Run()
}%c`
	fmt.Fprintf(w, s, i-1, "`"+s+"`", 96, 96, 10)
	w.Flush()
	runCmd := exec.Command("go", "run", fmt.Sprintf("Sully_%d/Sully_%d.go", i-1, i-1))
	runCmd.Run()
}
