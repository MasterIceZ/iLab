package main

import "fmt"

func isOdd(n int) bool{
	if n % 2 == 1{
		return true
	}
	return false
}

func HelloWorld() {
	fmt.Println("Hello World!!!")
}

func main(){
	for i:=1; i<=10; i++ {
		if isOdd(i) == true {
			fmt.Println("%d is Odd", i);
		} else {
			fmt.Println("%d is Even", i);
		}
	}
	i := 11
	for i<=20 {
		if isOdd(i) {
			fmt.Println("%d is Odd", i);
		} else {
			fmt.Println("%d is Even", i);
		}
		i += 1
	}
	HelloWorld()
}
