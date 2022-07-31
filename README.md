# expand.vector
An R package to produce all combinations of a single vector.

## Installation
Use `remotes::install_github("data-sea/expand.vector")`

## Use example
```r 
library(expand.vector)
vec <- 1:3
expand_vector(vec)
```
#### Output
```r
  var1 var2
1   1   1
2   1   2
3   1   3
4   2   1
5   2   2
6   2   3
7   3   1
8   3   2
9   3   3
```
