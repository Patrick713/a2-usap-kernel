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
	{ 0x736fe891, "sdio_unregister_driver" },
	{ 0x52ad51ee, "sdio_register_driver" },
	{ 0x2efe2ba6, "btmrvl_register_hdev" },
	{ 0x16ff5efd, "btmrvl_add_card" },
	{ 0x7fa795f, "_dev_err" },
	{ 0xab26b88f, "devm_request_threaded_irq" },
	{ 0x42141f39, "irq_of_parse_and_map" },
	{ 0x42aca429, "of_match_node" },
	{ 0x8b6486ce, "release_firmware" },
	{ 0xebaa9dc8, "kmem_cache_alloc_trace" },
	{ 0xf4610713, "kmalloc_caches" },
	{ 0x836b5cfc, "request_firmware" },
	{ 0xa983b633, "sdio_set_block_size" },
	{ 0x9f66006b, "sdio_claim_irq" },
	{ 0xf838b7d, "sdio_enable_func" },
	{ 0xe544be36, "devm_kmalloc" },
	{ 0x2196324, "__aeabi_idiv" },
	{ 0xe707d823, "__aeabi_uidiv" },
	{ 0x37a0cba, "kfree" },
	{ 0xed86c547, "sdio_writesb" },
	{ 0x2d6fcc06, "__kmalloc" },
	{ 0xee946877, "hci_recv_frame" },
	{ 0x48424f6a, "btmrvl_check_evtpkt" },
	{ 0xd28c75bb, "kfree_skb" },
	{ 0xc0134a64, "btmrvl_process_event" },
	{ 0x28f7fb79, "skb_pull" },
	{ 0xeab3fd69, "skb_put" },
	{ 0x22bf2ba1, "__alloc_skb" },
	{ 0xacf853f6, "btmrvl_send_module_cfg_cmd" },
	{ 0x56fe499f, "btmrvl_remove_card" },
	{ 0x8e865d3c, "arm_delay_ops" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0x3eabc38c, "_dev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x774ee217, "btmrvl_interrupt" },
	{ 0x39a12ca7, "_raw_spin_unlock_irqrestore" },
	{ 0x5f849a69, "_raw_spin_lock_irqsave" },
	{ 0x8a5cda92, "sdio_readsb" },
	{ 0xb1532c54, "sdio_disable_func" },
	{ 0x9b6e1194, "sdio_release_irq" },
	{ 0xfd070b43, "btmrvl_enable_hs" },
	{ 0xb752e3bf, "sdio_set_host_pm_flags" },
	{ 0xdcc27baf, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x72106160, "hci_resume_dev" },
	{ 0xe60c5ed4, "sdio_get_host_pm_caps" },
	{ 0x20773cd3, "dev_coredumpv" },
	{ 0x9d669763, "memcpy" },
	{ 0xe914e41e, "strcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0x12a38747, "usleep_range" },
	{ 0x718b8b7, "bt_info" },
	{ 0xf761c533, "sdio_readb" },
	{ 0x22c829f, "sdio_f0_readb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5f754e5a, "memset" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xc5833887, "sdio_release_host" },
	{ 0x1283af75, "sdio_writeb" },
	{ 0x93f1763e, "sdio_claim_host" },
	{ 0x8f678b07, "__stack_chk_guard" },
	{ 0xb1ad28e0, "__gnu_mcount_nc" },
};

MODULE_INFO(depends, "btmrvl,bluetooth");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "65A0DDC0CEEF578B8FA3D9C");
