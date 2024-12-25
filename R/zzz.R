#Construct so_file when the package is loaded.
.onLoad <- function(libname, pkgname) {
	lib_file <- download_artifact(pkgname)

	dyn.load(lib_file)
}

download_artifact <- function(pkgname) {
	os_type <- Sys.info()["sysname"]
	lib_file <- NULL

	if (os_type == "Linux") {
		lib_file <- file.path("libs", "libmatern.so")
	} else if (os_type == "Darwin") {
		lib_file <- file.path("libs", "libmatern.dylib")
	} else if (os_type == "Windows") {
		# TODO Need to complete the compilation process for Windows	
	}

	return(lib_file)
}


