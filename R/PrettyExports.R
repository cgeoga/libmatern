#' @export
cbesselK <- function(x, v) {
    if(length(x) == 1 & length(v) == 1) {
        .cbesselK_scalar(x, v)
    } else if (length(x) == length(v)) {
        .cbesselK_bufBoth(x, v)
    } else if (length(x) == 1 && length(v) > 1) {
        .cbesselK_bufV(x, v)
    } else if (length(x) > 1 && length(v) == 1) {
        .cbesselK_bufX(x, v)
    } else {
        print("Invalid arguments sent to cbesselK.")
    }
}

