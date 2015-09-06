\name{MaxElemsVec}
\alias{MaxElemsVec}
\title{Vector of the Maximal Elements Function}
\description{
    A R to C interfacing: function which generate a new vector with only max elements in choosed area 
}
\usage{
    MaxElemsVec( inputVector)  
}
\arguments{
    \item{inputVector}{Input vector of integer numbers}
}
\author{Nikita Khomitsevich, National Technical University of Ukraine "Kyiv Polytechnic Institute" B.S. student}
\keyword{array}
\examples{
    inputVector <- runif(100, 1, 10000)
    MaxElemsVec(inputVector)
}
