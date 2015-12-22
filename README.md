# Stripped-down version of libfastcgi for CGIKit 9

**CGIKit Web Developemnt Kit**. The FastCGI Web Application Framework for
Objective-C and Swift developers.

## The embedding of libfastcgi

libfastcgi is the reference implementation of the FastCGI protocol, but it is
not part of OS X. CGIKit embedded a stripped-down version (fcgiapp only) so it
can be built on OS X natively. On Linux, you can install libfastcgi and link
against it instead of using the embedded version.

I also modified [fcgiapp.h](fcgiapp.h) to use headerdoc-style documentation, so
that Xcode can recognize it.

## License

CGIKit framework depend on FastCGI C Library by Open Market. I have included a
preconfigured, stripped down and slightly modified version in its source form as
part of the library code. Those are covered in the original license of [FastCGI
C Library](LICENSE.md)

## Contact information

DreamCity by Max Chan

* Email: &lt;<max@maxchan.info>&gt;
* Website: <https://en.maxchan.info>
* Twitter: [@maxtch](https://twitter.com/maxtch)
