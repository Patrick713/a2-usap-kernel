cmd_drivers/hid/hid-cypress.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/hid/hid-cypress.ko drivers/hid/hid-cypress.o drivers/hid/hid-cypress.mod.o;  true