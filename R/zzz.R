#Construct so_file when the package is loaded.
.onLoad <- function(libname, pkgname) {
	lib_file <- download_artifact(pkgname)

	dyn.load(lib_file)
}

download_artifact <- function(pkgname) {
	os_type <- Sys.info()["sysname"]
	lib_file <- NULL

	linux_url <- "https://github.com/cgeoga/libmatern/releases/download/v1.0.0/libmatern.so.zip"
	mac_url <- "https://github.com/cgeoga/libmatern/releases/download/v1.0.0/libmatern.dylib.zip"
	windows_url <- ""
	status <- NULL

	if (os_type == "Linux") {
		status <- system(paste("curl -L", linux_url, " > libmatern.so.zip"))
		system("unzip libmatern.so.zip && mv libmatern.so libs")
		lib_file <- system.file("libs", "libmatern.so", package = pkgname)
	} else if (os_type == "Darwin") {
		status <- system(paste("curl -L", mac_url, " > libmatern.dylib.zip"))
		system("unzip libmatern.dylib.zip && mv libmatern.dylib libs")
		lib_file <- system.file("libs", "libmatern.dylib", package = pkgname)
	} else if (os_type == "Windows") {
		
	}

	return lib_file
}

