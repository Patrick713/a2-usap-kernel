cmd_drivers/input/gameport/lightning.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/input/gameport/lightning.ko drivers/input/gameport/lightning.o drivers/input/gameport/lightning.mod.o;  true