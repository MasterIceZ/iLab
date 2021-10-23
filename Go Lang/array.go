package main

import "fmt"

func main(){
	var a [10]int
	a[1] = 1;
	for i:=0; i<10; i++ {		
		fmt.Println("a[", i, "] = ", a[i]);
	}
}
