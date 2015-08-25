# First R extenshion

This is my first small extension for R language writing on __pure__ C. 

Here i present a small algorithm of array filling, where every _i_ element has to be as maximum from choosing gap restricts by only first _i_ elements.


## Example

```
> vec_of_max_elems(c(1,3,4,6,2,8,23,67,11,32,53,99,85))

[1]  1  3  4  6  6  8 23 67 67 67 67 99 99
```

```
> vec_of_max_elems(runif(100, 1, 100))

[1] 24 87 87 87 87 87 87 87 87 87 95 95 95 98 98 98 98 98 98 98 98 98 98 98 98
[26] 98 98 98 98 98 98 98 98 98 98 98 98 98 98 98 98 98 98 98 98 98 98 98 99 99
[51] 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99
[76] 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99 99
```

## Installation

### Git

1. Download the source via git: `git clone https://github.com/hamsternik/r-extenshion.git`
2. Go up in download folder: `cd r-extenshion`
3. Run _compile_ in bash/zsh/etc. To get it runnable, make `chmod +x compile`
4. After compile, run R-project interactive mode
5. Check your location, like `getwd()`, it must be **/_some/location_/r-extension**
6. Upload *vec_of_max_elems.R* script like `source("vec_of_max_elems.R")`
7. Use `vec_of_max_elems` function in R, like in example above
