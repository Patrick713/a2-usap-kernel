cmd_net/netfilter/ipvs/ip_vs_lblcr.ko := ld -r  -EL  --build-id  -T ./scripts/module-common.lds -T ./arch/arm/kernel/module.lds -o net/netfilter/ipvs/ip_vs_lblcr.ko net/netfilter/ipvs/ip_vs_lblcr.o net/netfilter/ipvs/ip_vs_lblcr.mod.o;  true