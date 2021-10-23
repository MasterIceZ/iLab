package main

import "fmt"

type Student struct {
	name string
	score int
}

var stu1 = Student{"Achin", 10};

func main(){
	fmt.Printf("%s : %d\n", stu1.name, stu1.score);
}
