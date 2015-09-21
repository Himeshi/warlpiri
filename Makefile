.PHONY: clean All

All:
	@echo "----------Building project:[ warlpiri - Debug ]----------"
	@$(MAKE) -f  "warlpiri.mk"
clean:
	@echo "----------Cleaning project:[ warlpiri - Debug ]----------"
	@$(MAKE) -f  "warlpiri.mk" clean
