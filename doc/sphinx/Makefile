# Makefile for Chapel documentation

# Makefile.sphinx interfaces with sphinx build commands
include Makefile.sphinx

help: help-sphinx help-source

help-source:
	@echo "Source Help:"
	@echo "  docs           to invoke 'make html' in the virtualenv"
	@echo "  checkdocs      to invoke 'make check' in the virtualenv"
	@echo "  symlinks-docs  to symlink doc/release contents to source"
	@echo "  module-docs    to invoke 'make documentation' in "'$$CHPL_HOME/modules'""
	@echo "  copy-docs      to copy doc/release pdf contents to source"
	@echo "  primers        to generate primer docs in source/primers/"
	@echo "  clean          to remove all generated files in source/"
	@echo "  clean-build    to remove all generated files in build/"
	@echo "  clobber        to remove all generated files in source/ and build/"
	@echo ""


docs: FORCE
	./run-in-venv.bash $(MAKE) html

man-chapel: FORCE
	./run-in-venv.bash $(MAKE) man


source: symlink-docs module-docs copy-docs primers

symlink-docs: clean-symlink-docs
	@echo
	@echo "Symbolically linking docs from "'$$CHPL_HOME'"/doc/release to "'$$CHPL_HOME'"/doc/sphinx/source"
	./symlinks.py

module-docs: clean-module-docs
	@echo
	@echo "Generating module docs from "'$$CHPL_HOME'"/modules/ into "'$$CHPL_HOME'"/doc/sphinx/source"
	(cd ../../modules && make documentation)

copy-docs: clean-copy-docs
	@echo
	@echo "Copying files from "'$$CHPL_HOME'"/doc/release to "'$$CHPL_HOME'"/doc/sphinx/source/"
	cp  ../release/quickReference.pdf     source/language/quickReference.pdf
	cp  ../release/chapelLanguageSpec.pdf source/language/chapelLanguageSpec.pdf

primers: clean-primers
	@echo
	@echo "Generating primers from "'$$CHPL_HOME'"/test/release/examples to "'$$CHPL_HOME'"/doc/sphinx/source/primers"
	@#Note - this assumes that we are not in a release tar ball
	./run-in-venv.bash ./chpl2rst.py ../../test/release/examples/primers/*.chpl --output=rst --prefix=source/primers
	./run-in-venv.bash ./chpl2rst.py ../../test/release/examples/primers/*doc.chpl --output=rst --codeblock --prefix=source/primers
	./run-in-venv.bash ./chpl2rst.py ../../test/release/examples/primers/chplvis/*.chpl --output=rst --prefix=source/primers


checkdocs: FORCE
	./run-in-venv.bash $(MAKE) check


clean: clean-source

cleanall: clean-source

clobber: clean-source clean-build

clean-source: clean-symlink-docs clean-module-docs clean-copy-docs clean-primers


clean-symlink-docs: FORCE
	@echo
	@echo "Removing all symbolic links created in source/"
	find source -type l -delete

clean-copy-docs: FORCE
	@echo
	@echo "Removing files that were copied into source/"
	rm -f source/language/quickReference.pdf
	rm -f source/language/chapelLanguageSpec.pdf

clean-module-docs: FORCE
	@echo
	@echo "Removing module docs that were generated into source/"
	rm -rf source/modules/dists
	rm -rf source/modules/internal
	rm -rf source/modules/layouts
	rm -rf source/modules/packages
	rm -rf source/modules/standard

clean-primers: FORCE
	@echo
	@echo "Removing primers generated into source/primers"
	find source/primers/ -type f -not -name 'primers*' -not -path '*/\.*' -print0 | xargs -0 rm -f


FORCE:
