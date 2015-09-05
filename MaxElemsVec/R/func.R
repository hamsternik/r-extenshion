func <-
function(vec) {
    vec_length <- length(vec)
    output_vec <- .C("vec_of_max_values_int", 
                     as.integer(vec), 
                     as.integer(vec_length),
                     result = as.integer(vector("integer", vec_length)))

    output_vec[["result"]]
}
