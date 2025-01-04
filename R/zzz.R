#Construct so_file when the package is loaded.
.onLoad <- function(libname, pkgname) {
	lib_file <- download_artifact(pkgname)
	print(lib_file)
	dyn.load(lib_file)
}

download_artifact <- function(pkgname) {
	os_type <- Sys.info()["sysname"]
	lib_file <- NULL

	if (os_type == "Linux") {
		print("Loading Linux binary")
		#lib_file <- file.path("libs", "libmatern.so")
		lib_file <- system.file("libs", "libmatern.so", package = "libmatern")
	} else if (os_type == "Darwin") {
		print("Loading Mac/Darwin binary")
		lib_file <- file.path("libs", "libmatern.dylib")
	} else if (os_type == "Windows") {
		print("Loading Windows binary")
		# TODO Need to complete the compilation process for Windows	
	}

	return(lib_file)
}


