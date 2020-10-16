cmd_fs/jfs/jfs.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o fs/jfs/jfs.ko fs/jfs/jfs.o fs/jfs/jfs.mod.o;  true
