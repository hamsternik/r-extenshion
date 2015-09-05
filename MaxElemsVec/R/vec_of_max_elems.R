vec_of_max_elems <-
function(vec) {
    vec_length <- length(vec)
    output_vec <- .C("vec_of_max_values", 
                     as.integer(vec), 
                     as.integer(vec_length),
                     result = as.integer(vector("integer", vec_length)))

    output_vec[["result"]]
}
