checksizes2 <- function(a, b, c) {
  if (length(a) != length(b)) stop("Argument buffer sizes don't agree.")
}

checksizes3 <- function(a, b, c) {
  if ((length(a) != length(b)) || (length(a) != length(c))) stop("Argument buffer sizes don't agree.")
}

#' dbesselk_dv
#' @description Description
#' @export
dbesselk_dv <- function(v, x, buf) {
  checksizes3(v, x, buf)
  result <- .Call("besselk_dv_buf", buf, length(v), v, x)
}

#' dbesselk_dx
#' description
#' @export
dbesselk_dx <- function(v, x, buf) {
  checksizes3(v, x, buf)
  result <- .Call("besselk_dx_buf", buf, length(v), v, x)
}

#' besselk
#' description
#' @export
besselk <- function(v, x, buf) {
  checksizes3(v, x, buf)
  result <- .Call("besselk_buf", buf, length(v), v, x)
}

#' matern
#' description
#' @export
matern <- function(buf, dists, params) {
  checksizes2(buf, dists)
  result <- .Call("matern_buf", buf, dists, length(dists),
               params[1], params[2], params[3])
}

#' matern_dsig
#' description
#' @export
matern_dsig <- function(buf, dists, params) {
  checksizes2(buf, dists)
  result <- .Call("matern_dsig_buf", buf, dists, length(dists),
               params[1], params[2], params[3])
}

#' matern_drho
#' description
#' @export
matern_drho <- function(buf, dists, params) {
  checksizes2(buf, dists)
  result <- .Call("matern_drho_buf", buf, dists, length(dists),
               params[1], params[2], params[3])
}

#' matern_dnu 
#' documentation
#' @export
matern_dnu <- function(buf, dists, params) {
  checksizes2(buf, dists)
  result <- .Call("matern_dnu_buf", buf, dists, length(dists),
               params[1], params[2], params[3])
}

