#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xe9942317, "module_layout" },
	{ 0x4c3e519, "mmc_gpio_get_cd" },
	{ 0x2bea6583, "mmc_gpio_get_ro" },
	{ 0x85c6e59a, "driver_unregister" },
	{ 0x31655912, "__spi_register_driver" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0x2cfde9a2, "warn_slowpath_fmt" },
	{ 0x76d31a13, "dev_driver_string" },
	{ 0x99183f05, "mmc_gpiod_request_cd_irq" },
	{ 0x22968ecd, "mmc_gpiod_request_ro" },
	{ 0xa2cb3e20, "mmc_gpiod_request_cd" },
	{ 0xc4fe9077, "mmc_add_host" },
	{ 0x8a7d1c31, "high_memory" },
	{ 0x68d7985b, "mmc_spi_get_pdata" },
	{ 0xecfdabd5, "mmc_alloc_host" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x525860bf, "mmc_request_done" },
	{ 0x6e9b1640, "spi_bus_unlock" },
	{ 0xc2bb1e6d, "dma_direct_map_page" },
	{ 0xa2048e95, "crc_itu_t" },
	{ 0xfffa3100, "sg_next" },
	{ 0xb8f64cea, "flush_kernel_dcache_page" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x987c11c7, "__pv_phys_pfn_offset" },
	{ 0x76d11765, "mem_map" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x83e29d3c, "spi_bus_lock" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0xc358aaf8, "snprintf" },
	{ 0xba95c5c0, "crc7_be" },
	{ 0xf65110e8, "_dev_warn" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6663995b, "spi_setup" },
	{ 0x1000e51, "schedule" },
	{ 0x526c3a6c, "jiffies" },
	{ 0xd4a95530, "spi_sync_locked" },
	{ 0x6cd901c4, "arm_dma_ops" },
	{ 0x97c7dfe0, "mmc_spi_put_pdata" },
	{ 0xa14b3aea, "mmc_free_host" },
	{ 0x37a0cba, "kfree" },
	{ 0xd6a6db20, "mmc_remove_host" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x5d2f2b13, "spi_sync" },
	{ 0x5f754e5a, "memset" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0x90926838, "mmc_detect_change" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "of_mmc_spi,crc7");

MODULE_ALIAS("of:N*T*Cmmc-spi-slot");
MODULE_ALIAS("of:N*T*Cmmc-spi-slotC*");

MODULE_INFO(srcversion, "2F740B5703CFE0E31CEE01B");
