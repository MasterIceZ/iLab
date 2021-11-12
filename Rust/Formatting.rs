fn main(){
    println!("{}, {}", 6, 3);
    println!("{0}, {1}, {0}", 5, 8);
    println!("{num:>width$}", num=1, width=3);
    println!("{num:9>width$}", num=1, width=3);
}
