cmd_drivers/media/rc/ir-sony-decoder.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o drivers/media/rc/ir-sony-decoder.ko drivers/media/rc/ir-sony-decoder.o drivers/media/rc/ir-sony-decoder.mod.o;  true