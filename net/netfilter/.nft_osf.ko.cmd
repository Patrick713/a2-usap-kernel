cmd_net/netfilter/nft_osf.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/nft_osf.ko net/netfilter/nft_osf.o net/netfilter/nft_osf.mod.o;  true