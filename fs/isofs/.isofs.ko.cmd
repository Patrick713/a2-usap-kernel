cmd_fs/isofs/isofs.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/isofs/isofs.ko fs/isofs/isofs.o fs/isofs/isofs.mod.o;  true
