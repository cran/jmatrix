% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{GetJManyRowsByNames}
\alias{GetJManyRowsByNames}
\title{GetJManyRowsByNames}
\usage{
GetJManyRowsByNames(fname, extrownames)
}
\arguments{
\item{fname}{String with the file name that contains the binary data.}

\item{extrownames}{A numeric vector with the names of the rows to be extracted. If the binary file has no row names, or _any_ of the row names is not present, an empty matrix is returned.}
}
\value{
A numeric matrix with the values of elements in the requested rows
}
\description{
Returns (as a R numeric matrix) the rows with the requested row names from the matrix contained in a jmatrix binary file
}
\examples{
Rf <- matrix(runif(48),nrow=6)
rownames(Rf) <- c("A","B","C","D","E","F")
colnames(Rf) <- c("a","b","c","d","e","f","g","h")
JWriteBin(Rf,"Rfullfloat.bin",dtype="float",dmtype="full",comment="Full matrix of floats")
Rf[c("A","C"),]
vf<-GetJManyRowsByNames("Rfullfloat.bin",c("A","C"))
vf
file.remove("Rfullfloat.bin")
}
