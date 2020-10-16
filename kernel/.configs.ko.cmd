cmd_kernel/configs.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o kernel/configs.ko kernel/configs.o kernel/configs.mod.o;  true
