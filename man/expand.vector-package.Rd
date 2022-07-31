\name{expand.vector-package}
\alias{expand.vector-package}
\alias{expand.vector}
\docType{package}
\title{
  An alternative to expandgrid() that take a single vector input.
}
\description{
  Unlike expand.grid() in base R, the function expland_vector() takes only a single argument.
  
}
\details{
  Resulting data frame will have two columns each of the same class as the input vector. 
}
\author{
David Christensen

Maintainer: David Christensen <david.christensen@gmail.com.com>
}
\references{
  Special thanks to Benjamin Christoffersen.
}
\keyword{ package }
\seealso{
  expand.grid()
}
\examples{
  \dontrun{

     vec <- 1:3
     expand_vector(vec)
     
     vec2<- c("foo", "bar")
     expand_vector(vec2)
  }
}
