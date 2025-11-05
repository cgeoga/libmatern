#' @export
cbesselK <- function(x, v) {
    if(length(x) == 1 && length(v) == 1) {
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

#' @export
cbesselK_dv <- function(x, v) {
    if(length(x) == 1 && length(v) == 1) {
        .cbesselKdv_scalar(x, v)
    } else if (length(x) == length(v)) {
        .cbesselKdv_bufBoth(x, v)
    } else if (length(x) == 1 && length(v) > 1) {
        .cbesselKdv_bufV(x, v)
    } else if (length(x) > 1 && length(v) == 1) {
        .cbesselKdv_bufX(x, v)
    } else {
        print("Invalid arguments sent to cbesselK_dv.")
    }
}

#' @export
cbesselK_dx <- function(x, v) {
    if(length(x) == 1 && length(v) == 1) {
        .cbesselKdx_scalar(x, v)
    } else if (length(x) == length(v)) {
        .cbesselKdx_bufBoth(x, v)
    } else if (length(x) == 1 && length(v) > 1) {
        .cbesselKdx_bufV(x, v)
    } else if (length(x) > 1 && length(v) == 1) {
        .cbesselKdx_bufX(x, v)
    } else {
        print("Invalid arguments sent to cbesselK_dx.")
    }
}
