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
	result <- .C("besselk_dv_buf", buf, as.integer(length(v)), v, x, PACKAGE = "libmatern")
	return (result[[1]])
}

#' dbesselk_dx
#' description
#' @export
dbesselk_dx <- function(v, x, buf) {
  checksizes3(v, x, buf)
	result <- .C("besselk_dx_buf", buf, as.integer(length(v)), v, x, PACKAGE = "libmatern")
	return (result[[1]])
}

#' besselk
#' description
#' @export
besselk <- function(v, x, buf) {
  checksizes3(v, x, buf)
	result <- .C("besselk_buf",    buf, as.integer(length(v)), v, x, PACKAGE = "libmatern")
	return (result[[1]])
}

#' matern
#' description
#' @export
matern <- function(buf, dists, params) {
  checksizes2(buf, dists)
  result <- .C("matern_buf", buf, dists, as.integer(length(dists)),
               params[1], params[2], params[3], PACKAGE = "libmatern")
  return (result[[1]])
}

#' matern_dsig
#' description
#' @export
matern_dsig <- function(buf, dists, params) {
  checksizes2(buf, dists)
  result <- .C("matern_dsig_buf", buf, dists, as.integer(length(dists)),
               params[1], params[2], params[3], PACKAGE = "libmatern")
  return (result[[1]])
}

#' matern_drho
#' description
#' @export
matern_drho <- function(buf, dists, params) {
  checksizes2(buf, dists)
  result <- .C("matern_drho_buf", buf, dists, as.integer(length(dists)),
               params[1], params[2], params[3], PACKAGE = "libmatern")
  return (result[[1]])
}

#' matern_dnu 
#' documentation
#' @export
matern_dnu <- function(buf, dists, params) {
  checksizes2(buf, dists)
  result <- .C("matern_dnu_buf", buf, dists, as.integer(length(dists)),
               params[1], params[2], params[3], PACKAGE = "libmatern")
  return (result[[1]])
}

