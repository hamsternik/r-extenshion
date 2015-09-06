MaxElemsVec <- function(inputVector) {
    inputVectorLength <- length(inputVector)
    outputVector <- .C("vec_of_max_values_int", 
                     as.integer(inputVector), 
                     as.integer(inputVectorLength),
                     result = as.integer(vector("integer", inputVectorLength)))

    outputVector[["result"]]
}

