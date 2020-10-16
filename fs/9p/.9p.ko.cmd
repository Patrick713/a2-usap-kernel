cmd_fs/9p/9p.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/9p/9p.ko fs/9p/9p.o fs/9p/9p.mod.o;  true
