# 'MaxElemsVec' R Package

This is my first small extension for R language writing on __pure__ C. 
For details, you can look at __main.c__ file for taking more info about code. _(yep, it's really small)_

Here i present a small algorithm of array filling, where every _i-th_ element has to be maximal from choosing gap restricts by only first _i-th_ elements.


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
3. Here you might see a folder _MaxElemsVec_ which contains all needed files.
4. If you wanna check my package, do it by `R CMD check MaxElemsVec` command
5. After checking (or not, if you believe me) sources, you can build it by runnig `R CMD INSTALL --build MaxElemsVec` command. 

Or you can obtain a _.tar.gz_ archive package using `R CMD INSTALL MaxElemsVec` and then install it like a local package (without any repos) with next one: `install.packages(path_to_file, repos = NULL, type="source")`, where _'path_to_file'_  is your location include _r-extenshion_ folder.
